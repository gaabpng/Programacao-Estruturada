## Lista de Exercícios: Listas Duplamente Encadeadas e Arquivos

---

### Exercício 1: Rotação de Comandos

Escreva uma função em C que receba uma lista duplamente encadeada com nó cabeça contendo comandos armazenados na forma de cadeias de caracteres (strings) e seja capaz de rotacionar a lista para a direita e para a esquerda, tantas vezes quanto for o valor de um inteiro **n** passado como parâmetro.

* Se o inteiro **n** for positivo, a lista deve ser rotacionada **n** vezes para a direita.
* Se for negativo, a lista deve ser rotacionada **n** vezes para a esquerda.

---

### Exercício 2: Intercalação de Listas Ordenadas

Especifique uma struct e um tipo em C para uma lista ordenada duplamente encadeada que armazena em cada nó uma chave (inteiro) e um nome (string). Crie uma função que intercale duas dessas listas de tal forma que a lista resultante também se mantenha completamente ordenada.

---

### Exercício 3: Integração com Arquivos (Persistência de Dados)

Modifique a lógica dos exercícios anteriores para que os dados sejam manipulados através de arquivos de texto (`.txt`):

* **Parte A (Baseada no Exercício 1):** Escreva uma função que abra um arquivo chamado `comandos.txt`, leia os comandos linha por linha e os insira dinamicamente na lista duplamente encadeada com nó cabeça antes de chamar a função de rotação.
* **Parte B (Baseada no Exercício 2):** Escreva uma função que carregue os dados das duas listas ordenadas a partir de dois arquivos distintos (`turmaA.txt` e `turmaB.txt`), onde cada linha segue o formato `[chave] [nome]`. Após realizar a intercalação das listas na memória, crie uma função que grave o resultado final ordenado em um terceiro arquivo chamado `resultado.txt`.