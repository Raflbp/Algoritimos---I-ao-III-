#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct gladiador {
	string Nome;
	int Forca;
	int Habilidade;
	int Idade;
	int vida;
};

// Essa função faz gladiador atacante atacar o defensor
void dano(int atacante, int defensor, gladiador h[]) {
	int ataque = h[atacante].Forca * pow(2, h[atacante].Habilidade);
	h[defensor].vida -= ataque;

	if (h[defensor].vida < 0) {
		h[defensor].vida = 0;
	}
}

// Retorna true se ainda está vivo
bool estaVivo(int i, gladiador h[]) {
	return h[i].vida > 0;
}

int main() {
	gladiador dados[5];

	for (int i = 0; i < 5; i++) {
		getline(cin >> ws, dados[i].Nome);
		cin >> dados[i].Forca;
		cin >> dados[i].Habilidade;
		cin >> dados[i].Idade;
		dados[i].vida = 100;
	}

	int glad1, glad2;
	cin >> glad1 >> glad2;

	while (estaVivo(glad1, dados) && estaVivo(glad2, dados)) {
		dano(glad1, glad2, dados); // glad1 ataca glad2
		if (!estaVivo(glad2, dados)) break;

		dano(glad2, glad1, dados); // glad2 ataca glad1
	}

	int glad3, glad4;
	cin >> glad3 >> glad4;

	while (estaVivo(glad3, dados) && estaVivo(glad4, dados)) {
		dano(glad3, glad4, dados); // glad1 ataca glad2
		if (!estaVivo(glad4, dados)) break;

		dano(glad3, glad4, dados); // glad2 ataca glad1
	}
	
	if (estaVivo(glad1, dados)) {
		cout << dados[glad1].Nome << " ganhou a batalha contra" << dados[glad2].Nome<< endl;
	} else {
		cout << dados[glad2].Nome << " ganhou a batalha contra" << dados[glad1].Nome<< endl;
	}

	if (estaVivo(glad3, dados)) {
		cout << dados[glad3].Nome << " ganhou a batalha contra " << dados[glad4].Nome << endl;
	} else {
		cout << dados[glad4].Nome << " vganhou a batalha contra " << dados[glad3].Nome << endl;
	}
	
	return 0;
}
/*
1. Função `dano(int atacante, int defensor, gladiador h[])`
    Operações:
      Acesso a array → O(1)
      Exponenciação com `pow(2, habilidade)` → O(1) (habilidade varia de 0 a 10)
      Atribuições/subtrações → O(1)
  Complexidade: **O(1)**

2. Função `estaVivo(int i, gladiador h[])`
    Apenas um acesso e comparação → O(1)
  Complexidade: **O(1)**

3. Loop de cadastro dos 5 gladiadores:
    Executa 5 vezes, cada iteração com leitura de 4 variáveis + inicialização de vida
    Complexidade: **O(1)** (constante, pois são sempre 5 gladiadores)

4. Lógica de combate (dois `while`)
    Cada `while` continua enquanto ambos gladiadores têm vida > 0
    Em cada rodada, um ataca o outro: 2 chamadas a `dano()` e 2 a `estaVivo()`
    No pior caso, cada gladiador faz até ~100 ataques (vida inicial = 100)
    Complexidade por batalha: **O(k)** onde k ≈ vida/dano médio → **O(1)** para valores limitados

5. Código principal (`main`)
    Leitura e armazenamento de dados → O(1)
    Execução de duas batalhas → O(1)
    Impressão de resultado → O(1)
    Complexidade total: **O(1)** (todas operações são sobre um conjunto fixo de gladiadores)

*/
