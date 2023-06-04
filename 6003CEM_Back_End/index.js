// My blog ApI

// Set up the application and its router 

const Koa = require('koa');

const app = new Koa();

const special = require('./routes/special.js');
const articles = require('./routes/articles.js');

app.use(special.routes());
app.use(articles.routes());

let port = process.env.PORT || 3000;

app.listen(port);