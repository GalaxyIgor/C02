#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
    srand(time(NULL));
	// Mostra Escolhendo um filme
	cout << "Escolhendo um filme" << endl;


	string filmes[160][3] =
	{
		{"Matrix", "Acao", "Classifica��o 4"},
		{"Inception", "Acao", "Classifica��o 4"},
		{"O Exterminador do Futuro 2: O Julgamento Final", "Acao", "Classifica��o 4"},
		{"Duro de Matar", "Acao", "Classifica��o 4"},
		{"Gladiador", "Acao", "Classifica��o 4"},
		{"O Senhor dos An�is: O Retorno do Rei", "Acao", "Classifica��o 4"},
		{"Batman: O Cavaleiro das Trevas", "Acao", "Classifica��o 4"},
		{"Interestelar", "Acao", "Classifica��o 4"},
		{"Clube da Luta", "Acao", "Classifica��o 4"},
		{"O Resgate do Soldado Ryan", "Acao", "Classifica��o 4"},
		{"O Grande Her�i", "Acao", "Classifica��o 4"},
		{"O Homem de A�o", "Acao", "Classifica��o 3"},
		{"Rogue One: Uma Hist�ria Star Wars", "Acao", "Classifica��o 4"},
		{"C�rculo de Fogo", "Acao", "Classifica��o 3"},
		{"Bumblebee", "Acao", "Classifica��o 3"},
		{"Kingsman: Servi�o Secreto", "Acao", "Classifica��o 4"},
		{"Scott Pilgrim Contra o Mundo", "Acao", "Classifica��o 4"},
		{"O Ultimato Bourne", "Acao", "Classifica��o 3"},
		{"Carga Explosiva", "Acao", "Classifica��o 3"},
		{"Ca�adores de Emo��o", "Acao", "Classifica��o 3"},
		{"Blade: O Ca�ador de Vampiros", "Acao", "Classifica��o 3"},
		{"Oblivion", "Acao", "Classifica��o 3"},
		{"A Identidade Bourne", "Acao", "Classifica��o 3"},
		{"Opera��o Chromite", "Acao", "Classifica��o 3"},
		{"O Grande Mestre", "Acao", "Classifica��o 4"},
		{"A Supremacia Bourne", "Acao", "Classifica��o 3"},
		{"22 Milhas", "Acao", "Classifica��o 3"},
		{"O Ataque", "Acao", "Classifica��o 3"},
		{"Cowboys & Aliens", "Acao", "Classifica��o 3"},
		{"O Grande Drag�o Branco", "Acao", "Classifica��o 3"},
		{"Desejo de Matar", "Acao", "Classifica��o 3"},
		{"Velocidade M�xima", "Acao", "Classifica��o 3"},
		{"O Franco Atirador", "Acao", "Classifica��o 3"},
		{"A Hora do Rush", "Acao", "Classifica��o 3"},
		{"Opera��o Sombra: Jack Ryan", "Acao", "Classifica��o 3"},
		{"O Ataque dos Vermes Malditos", "Acao", "Classifica��o 3"},
		{"Machete", "Acao", "Classifica��o 3"},
		{"Duro de Matar", "Acao", "Classifica��o 5"},
		{"Velozes e Furiosos", "Acao", "Classifica��o 4"},
		{"John Wick", "Acao", "Classifica��o 4"},
		{"Miss�o Imposs�vel", "Acao", "Classifica��o 4"},
		{"Mad Max:Estrada da F�ria", "Acao", "Classifica��o 4"},
		{"O Protetor", "A��o", "Classifica��o 3"},
		{"Os Mercen�rios", "A��o", "Classifica��o 3"},
		{"At�mica", "A��o", "Classifica��o 3"},
		{"Opera��o Invas�o", "A��o", "Classifica��o 4"},
		{"Kill Bill:Volume 1", "A��o", "Classifica��o 4"},
		{"Busca Implac�vel", "A��o", "Classifica��o 3"},
		{"Dredd", "A��o", "Classifica��o 3"},
		{"Django Livre", "A��o", "Classifica��o 4"},
		{"Matrix", "A��o", "Classifica��o 4"},
		{"O Exterminador do Futuro", "A��o", "Classifica��o 4"},
		{"Aliens, o Resgate", "A��o", "Classifica��o 4"},
		{"Homem de Ferro", "A��o", "Classifica��o 4"},
		{"C�rculo de Fogo", "A��o", "Classifica��o 3"},
		{"Rambo:Programado Para Matar", "A��o", "Classifica��o 4"},
		{"Blade Runner 2049", "A��o", "Classifica��o 4"},
		{"Esquadr�o Suicida", "A��o", "Classifica��o 3"},
		{"O Grande Her�i", "A��o", "Classifica��o 4"},
		{"Vingadores:Ultimato", "A��o", "Classifica��o 4"},
		{"O Regresso", "A��o", "Classifica��o 4"},
		{"Capit�o Am�rica:O Soldado Invernal", "A��o", "Classifica��o 4"},
		{"Jurassic Park", "A��o", "Classifica��o 4"},
		{"Homem - Aranha:De Volta ao Lar", "A��o", "Classifica��o 4"},
		{"Planeta dos Macacos:O Confronto", "A��o", "Classifica��o 4"},
		{"A Origem", "A��o", "Classifica��o 4"},
		{"O Resgate do Soldado Ryan", "A��o", "Classifica��o 4"},
		{"Duro de Matar", "A��o", "Classifica��o 5"},
		{"Velozes e Furiosos", "A��o", "Classifica��o 4"},
		{"John Wick", "A��o", "Classifica��o 4"},
		{"Miss�o Imposs�vel", "A��o", "Classifica��o 4"},
		{"O Protetor", "A��o", "Classifica��o 3"},
		{"Os Mercen�rios", "A��o", "Classifica��o 3"},
		{"At�mica", "A��o", "Classifica��o 3"},
		{"Opera��o Invas�o", "A��o", "Classifica��o 4"},
		{"Busca Implac�vel", "A��o", "Classifica��o 3"},
		{"Dredd", "A��o", "Classifica��o 3"},
		{"Django Livre", "A��o", "Classifica��o 4"},
		{"Matrix", "A��o", "Classifica��o 4"},
		{"O Exterminador do Futuro", "A��o", "Classifica��o 4"},
		{"Aliens, o Resgate", "A��o", "Classifica��o 4"},
		{"Homem de Ferro", "A��o", "Classifica��o 4"},
		{"C�rculo de Fogo", "A��o", "Classifica��o 3"},
		{"Blade Runner 2049", "A��o", "Classifica��o 4"},
		{"Esquadr�o Suicida", "A��o", "Classifica��o 3"},
		{"O Grande Her�i", "A��o", "Classifica��o 4"},
		{"O Regresso", "A��o", "Classifica��o 4"},
		{"Jurassic Park", "A��o", "Classifica��o 4"},
		{"A Origem", "A��o", "Classifica��o 4"},
		{"O Resgate do Soldado Ryan", "A��o", "Classifica��o 4"}
	};
    
	
	cout << "Filme Aleatorio: " << endl;
	cout << endl;
	cout << "Nome: " << nomeFilme << endl;
	cout << "Categoria: " << categoriaFilme << endl;
	cout << "Classificacao: " << classificacaoFilme << endl;

	return 0;
}
