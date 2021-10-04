var convidado = {nome: "Gabriel", idade: 20};
console.log(convidado);
delete convidado.idade;
console.log(convidado);

//-------------------------------------------------------------------------------

var convidado1 = {idade: 21};
var convidado2 = convidado1;
var convidado3 = {idade: 21};

console.log(convidado1 == convidado2);
console.log(convidado1 == convidado3);

//-------------------------------------------------------------------------------

var convidados = {};

convidados["ABC123"] = {nome: "Gabriel",idade: 20};

convidados["XYZ456"] = {nome: "Ana",idade: 18};

console.log(convidados);
console.log(convidados["ABC123"]);

//-------------------------------------------------------------------------------

function ola() {
    console.log(arguments);
   }

   ola("Felipe", "Gabriel", "Bruno", "Douglas");
// → ["Felipe", "Gabriel", "Bruno", "Douglas"]


//-------------------------------------------------------------------------------


function ola() {
    var mensagem = "Olá ";
    for(i = 0;i < arguments.length - 1;i++) {
    mensagem += arguments[i];
    if (i < arguments.length - 2) {
    mensagem += ", ";
    }
    }
    mensagem += " e " + arguments[arguments.length - 1] + "! Tudo bem!?";
    console.log(mensagem);
   }
   ola("Felipe", "Gabriel", "Bruno", "Douglas");

   //------------------------------------------------------------------------------- DESAFIO

   var convidados = {};
   var opc = prompt("Digite 1 para cadastro ou 2 para pesquisa");
   
   if (opc == 1){
   while(true) {
    var nome = prompt("Digite o nome do convidado ou s para sair");
    if (nome == "s") {
        break;
        } 
    var idade = Number(prompt("Digite a idade do convidado"));
    var cpf = prompt("Digite o CPF do convidado");
    convidados[nome] = {nome: nome, idade: idade, cpf: cpf};

    console.log(convidados);
    break;
   }
}

if(opc == 2){
            var nomep = prompt("Digite o nome que deseja pesquisar");
            console.log(convidados[nomep]);
}
  

      //-------------------------------------------------------------------------------

