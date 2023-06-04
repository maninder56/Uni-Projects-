/**
 * A module to run SQL queries on MySQL on behalf of the API models.
 * @module helpers/database
 * @author Colin Stephen
 * @see models/* for the models that require this module
 */




const mysql = require('promise-mysql');
const info = require('../config');

// define an async utitlity function to get a conncection 
// run an SQL query then end the connection
/**
 * Run an SQL query against the DB, end the connection and return the result.
 * @param {string} Query SQL query string in sqljs format
 * @param {array|number|string} values The values to inject in to the query string.
 * @returns {object} mysqljs results object containing indexable rows
 * @throws {DatabaseException} Custom exception for DB query failures
 */

exports.run_query = async function run_query(query, values){
    try {
        const connection = await mysql.createConnection(info.config);
        let data = await connection.query(query, values);
        await connection.end();
        return data
    } catch (error) {
        console.error(error, query, values);
        throw 'Database query error'
    }
}