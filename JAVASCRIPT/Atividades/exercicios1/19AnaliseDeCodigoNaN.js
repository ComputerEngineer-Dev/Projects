//No JavaScript, NaN (Not-a-Number) tem uma propriedade peculiar: 
//qualquer comparação de NaN com qualquer valor, inclusive com ele mesmo, 
//retorna false.

let a = NaN;
if(a === NaN) {
    console.log('É NaN');
} else {
    console.log('Não é NaN');
}



//Para verificar se um valor é NaN corretamente em JavaScript, você deve usar a função Number.isNaN()
//let a = NaN;
if (Number.isNaN(a)) { //Number.isNaN() verifica se o valor é exatamente o valor especial NaN
    console.log('É NaN');
} else {
    console.log('Não é NaN');
}
