var htmlWapackPlugin = require('html-webpack-plugin')
var path =require('path');

module.exports = {
	context:__dirname,
	entry:{
		main:'./src/app.js',
		// a:'./src/js/a.js',
		// b:'./src/js/b.js',
		// c:'./src/js/c.js',
	},
	output: {
		path:'./dist',
		filename:'js/[name].bundle.js',
		// publicPath:'http://cdn.com'
	},
	module:{
		loaders:[
			{
				test:'/\.js$/',
				loader: 'babel',
				exclude:path.resolve(__dirname,'node_modules'),
				include:path.resolve(__dirname,'src'),
				// include:'./src/',
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
	// postcss:[
	// 	require('autoprefixer')({
	// 		browsers:['last 5 versions']
	// 	})
	// ],
	plugins:[
		new htmlWapackPlugin({
			template:'index.html',
			filename: 'index.html',
			inject:'body',
			title:'this is a.html',
			excludeChunks:['b','c']
			
		}),
		// new htmlWapackPlugin({
		// 	template:'index.html',
		// 	filename: 'b.html',
		// 	inject:false,
		// 	title:'this is b.html!',
		// 	excludeChunks:['a','c']
		// }),
		// new htmlWapackPlugin({
		// 	template:'index.html',
		// 	filename: 'c.html',
		// 	inject:false,
		// 	title:'this is c.html!',
		// 	excludeChunks:['a','b']
		// }),

	]
}