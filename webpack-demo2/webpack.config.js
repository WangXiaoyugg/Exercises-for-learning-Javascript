var htmlWapackPlugin = require('html-webpack-plugin')
var path =require('path');

module.exports = {
	context:__dirname,
	entry:{
		main:'./src/app.js',
	},
	output: {
		path:'./dist',
		filename:'js/[name].bundle.js',
		
	},
	module:{
		loaders:[
			{
				test:'/\.js$/',
				loader: 'babel',
				exclude:path.resolve(__dirname,'node_modules'),
				include:path.resolve(__dirname,'src'),
				query: {
					presets: ['latest']
				}
			},
			{
				test:'/\.css$/',
				loader: 'style-loader!css-loader' 
			}
		]
	},

}