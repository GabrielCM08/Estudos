var numeros = [10, 18, 1, 15, 2, 12, 21, 33, 100];
var pares = function(item) {
 return !(item % 2);
}
var dobrados = function(item) {
 return item * 2;
}
var numerosDobrados = numeros.filter(pares).map(dobrados);
console.log(numerosDobrados);
// → [20, 36, 4, 24, 200]

//------------------------------------------------------------------------------------------

var numeros = [10, 18, 1, 15, 2, 12, 21, 33, 100];
var pares = function(item) {
 return !(item % 2);
}
var dobrados = function(item) {
 return item * 2;
}
var maiores = function(item) {
 return item >= 10;
}
var numerosDobrados = numeros.filter(pares).map(dobrados).filter(maiores);
console.log(numerosDobrados);
// → [20, 36, 24, 200]

//------------------------------------------------------------------------------------------

var numeros = [10, 18, 1, 15, 2, 12, 21, 33, 100];
var pares = function(item) {
 return !(item % 2);
}
var dobrados = function(item) {
 return item * 2;
}
var maiores = function(item) {
 return item >= 10;
}
var media = function(total, item, indice) {
 return (total + item) / (indice + 1);
}
var mediaDobrada =
numeros.filter(pares).map(dobrados).filter(maiores).reduce(media, 0);

console.log(mediaDobrada);
// → 54.333333333333336

//------------------------------------------------------------------------------------------

var carros = [{marca: 'Audi', cor: 'preto'},
 {marca: 'Audi', cor: 'branco'},
 {marca: 'Ferarri', cor: 'vermelho'},
 {marca: 'Ford', cor: 'branco'},
 {marca: 'Peugot', cor: 'branco'}];
function groupBy(array, prop) {
 var value = array.reduce(function(total, item) {
 var key = item[prop];
 total[key] = (total[key] || []).concat(item);
 return total;
 }, {});
 return value;
};
var agrupados = groupBy(carros, 'marca');
console.log(agrupados);
// → {
// "Audi": [
// {marca: "Audi", cor: "preto"},
// {marca: "Audi", cor: "branco"
// ],
// "Ferarri": [
// {marca: "Ferarri", cor: "vermelho"}
// ],
// "Ford": [
// {marca: "Ford", cor: "branco"}
// ],
// "Peugot": [
// {marca: "Peugot", cor: "branco"}
// ]

//------------------------------------------------------------------------------------------

var produtos = [
    {id: 123, nome: 'Camiseta', cor: 'preto', tamanho: 'G', categoria:
   'Vestuário'},
    {id: 456, nome: 'Tênis', cor: 'preto', tamanho: '41', categoria:
   'Vestuário'},
    {id: 789, nome: 'Bola', cor: 'verde', tamanho: 'Único', categoria:
   'Esporte'}
   ]
   function groupBy(array, prop) {
    var value = array.reduce(function(total, item) {
    var key = item[prop];
    total[key] = (total[key] || []).concat(item);
    return total;
    }, {});
    return value;
   };
   var agrupados = groupBy(produtos, 'categoria');
   console.log(agrupados);
   // → {
   // "Esporte": [
   // {id: 789, nome: "Bola", cor: "verde", tamanho: "Único", categoria:"Esporte"}
   // ],
   // "Vestuário": [
   // {id: 123, nome: "Camiseta", cor: "preto", tamanho: "G", categoria:"Vestuário"},
   // {id: 456, nome: "Tênis", cor: "branco", tamanho: "41", categoria:"Vestuário"}
   // ]
   // }

   //------------------------------------------------------------------------------------------

   var produtos = [
    {id: 123, nome: 'Camiseta', cor: 'preto', tamanho: 'G', categoria:
   'Vestuário'},
    {id: 125, nome: 'Shorts', cor: 'preto', tamanho: 'G', categoria:
   'Vestuário'},
    {id: 456, nome: 'Tênis', cor: 'preto', tamanho: '41', categoria:
   'Vestuário'},
    {id: 789, nome: 'Bola', cor: 'verde', tamanho: 'Único', categoria:
   'Esporte'}
   ]
   Array.prototype.groupBy = function(prop) {
    var value = this.reduce(function(total, item) {
    var key = item[prop];
    total[key] = (total[key] || []).concat(item);
    return total;
    }, {});
    return value;
   }
   var produtosFiltrados = produtos.filter(function(item) {
    return item.cor == 'preto';
   }).filter(function(item) {
    return item.tamanho == 'G';
   }).groupBy('categoria');
   console.log(produtosFiltrados);
   // → {
   // "Vestuário": [
   // {id: 123, nome: "Camiseta", cor: "preto", tamanho: "G", categoria:"Vestuário"},
   // {id: 125, nome: 'Shorts', cor: 'preto', tamanho: 'G', categoria:'Vestuário'},
   //  ]
   // }

   //------------------------------------------------------------------------------------------ DESAFIO 

   Array.prototype.groupBy = function(prop) {
    var value = this.reduce(function(total, item) {
    var key = item[prop];
    total[key] = (total[key] || []).concat(item);
    return total;
    }, {});
    return value;
   }
   var convidados = [
    {nome: 'Felipe', idade: 37, genero: 'masculino'},
    {nome: 'Amanda', idade: 17, genero: 'feminino'},
    {nome: 'João', idade: 27, genero: 'masculino'},
    {nome: 'Daniel', idade: 21, genero: 'masculino'},
    {nome: 'Helena', idade: 21, genero: 'feminino'}
   ];
   var convidadosFiltrados = convidados.sort(function(a, b) {
    return (a.nome > b.nome) ? 1 : -1; // 1 B precede A, -1 A precede B            ||      return (a.nome > b.nome) ? 1 : ((b.nome > a.nome) ? -1 : 0);
   }).filter(function(item) {
    return item.idade >= 18;
   }).groupBy('genero');
   console.log(convidadosFiltrados);
   