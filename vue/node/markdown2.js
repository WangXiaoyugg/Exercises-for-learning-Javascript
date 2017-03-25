const markdown = require('markdown').markdown;
const fsp = require('fs-promise');
let onerror = (err)=>{
	console.log('something wrong...');
}

fsp.readFile('a.md','utf-8')
   .then((mdStr)=>{
   	 return markdown.toHTML(mdStr)
   }).then((html)=>{
   	 fsp.writeFile('b.html',html)
   }).catch(onerror)