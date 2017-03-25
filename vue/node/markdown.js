const fs = require('fs');
const markdown = require('markdown').markdown;

fs.readFile('a.md', 'utf-8', function(err,str){
	if(err){
		return console.log(err)
	}
	let html = markdown.toHTML(str)
	fs.writeFile('b.html',html, (err)=>{
		if(err){
			return console.log(err)
		}
		console.log('WRITE SUCCESS')
	})
})