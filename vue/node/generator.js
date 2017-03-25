function fn(a,b) {
	console.log('fn...')
	return a+b;
}

function* gen(x) {
	console.log(x);
	let y = yield fn(x,100)+3;
	console.log(y);
	return 200;
}
let g=gen(1);
console.log(g.next())
g.next(g.next().value)