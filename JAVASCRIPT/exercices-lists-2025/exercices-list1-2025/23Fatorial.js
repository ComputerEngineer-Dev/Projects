function calcularFatorial(n) {
    if (n === 0 || n === 1) return 1;
    return n * calcularFatorial(n - 1);
}

var numero = 3;
console.log(`Fatorial de ${numero} é ${calcularFatorial(numero)}`);
