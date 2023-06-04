// This file will define the API route handlers for Articles 
const Router = require('koa-router');

// we are handling to parase requests bodies so import koa-bosyparser 
const bodyParser = require('koa-bodyparser');

const model = require('../models/articles');

const {validateArticle} = require('../controllers/validation');

// Since we are handling articles use a URI that begins with an appropriate path 
const router = Router({prefix: '/api/v1/articles'});


// Routes are needed to connect path endpoints to handler functoin. 
// When an Article id needs to be matched we use a pattern to match
// a named route parameter. Here the name of the parameter will be 'id'
// and we will define the pattern to match at least 1 numeral. 

router.get('/', getAll);
router.post('/', bodyParser(), validateArticle, createArticle);

router.get('/:id([0-9]{1,})', getById);
router.put('/:id([0-9]{1,})', bodyParser(), validateArticle, updateArticle);
router.del('/:id([0-9]{1,})', deleteArticle);

// Now we define the handler function used above. 

async function getAll(ctx){
    // Use the reponse body to send the article as JSON
    let articles = await model.getAll();
    if (articles.length){
        ctx.body = articles; 
    }
    
}

async function getById(ctx){
    // Get the ID from the route parameters. 
    let id = ctx.params.id;

    let article = await model.getById(id);
    if (article.length) {
        ctx.body = article[0];
    }
}

async function createArticle(ctx){
    const body = ctx.request.body;
    let result = await model.add(body);
    if (result){
        ctx.status = 201;
        ctx.body = {ID: result.insertId}
    }
}

async function updateArticle(ctx){
    // TODO: edit an articler
    /*
    let id = ctx.params.id;
    console.log(id);
    
    let {title, fullText} = ctx.request.body;
    let newArticle = {title:title, fullText:fullText};
    articles[id-1] = newArticle
*/

}

async function deleteArticle(ctx, next){
    // TODO: delete an article
    /* 
    let id = ctx.params.id;
    console.log(id);

    delete articles[id-1] */
}

// Finallt define the exported object when 'require'd from other scripts.
module.exports = router;





