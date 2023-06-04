
// add routes for users 


async function getAll(ctx) {
    const permission = can.readAll(ctx.state.user);
    if (!permission.granted){
        ctx.status = 403;
    } else {
        const result = await model.getAll();
        if (result.length){
            ctx.body = result;
        }
    }
}


// permision implementation 
const can = require('../permissions/users');

