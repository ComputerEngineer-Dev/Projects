/*A propriedade global NaN é um valor especial que significa Not-A-Number (não é um número).*/
console.log(NaN === NaN); // falso
console.log(Number.NaN === NaN);// falso
console.log(isNaN(NaN)); // verdadeiro
console.log(isNaN(Number.NaN)); // verdadeiro


