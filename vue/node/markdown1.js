const fs = require('fs');
const markdown = require('markdown').markdown;

readFile('a.md')
   .then((mdStr)=>{
   	return markdown.toHTML(mdStr)
   }).then(html=>{
   	 writeFile('b.html',html)
   	 console.log('writeSuccess')
   }).catch((e)=>{
   	  console.log(e)
   })

function readFile(url){
	var promise = new Promise((resolve,reject)=>{
       fs.readFile(url,'utf-8',(err,str)=>{
       	 if(err){
       	 	reject(new Error('readFile error'))
       	 }else{
       	 	resolve(str)
       	 }
       })
	})
	return promise
}

function  writeFile(url,data) {
	var promise = new Promise((resolve,reject)=>{
		fs.writeFile(url,data,(err,str)=>{
			if(err){
				reject(new Error('WriteFile error'))
			}else{
				resolve()
			}
		})
	})
	return promise
}




   