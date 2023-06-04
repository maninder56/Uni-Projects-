/**
 * A module to run JSON Schema based validation on request/response data.
 * @module controllers/validation
 * @author Colin Stephen
 * @see schemas/* for JSON Schema definition files
 */


const {Validator, ValidationError} = require('jsonschema');

const schema = require('../schemas/article.json');

const userSchema = require('../schemas/user.json').definitions.user;

const V = new Validator();

exports.validateArticle = async (ctx, next) => {
    
    const validationOption = {
        throwError : true,
        allowUnkownAttributes: false
    };

    const body = ctx.request.body;

    try {
        V.validate(body, schema, validationOption);
        await next();
    } catch (error) {
        if (error instanceof ValidationError){
            ctx.body = error;
            ctx.status = 400;
        } else {
            throw error;
        }
    }
}
