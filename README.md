# Exercicio04
Em uma lista A temos um conjunto de elementos inteiros positivos ou não [a<sub>1</sub>, a<sub>2</sub>, . . . , a<sub>n</sub>]. Elabore uma função que consiga encontrar
neste conjunto a máxima soma.

# Solução

<p align="justify">
Para este progama o usuário deve primeiro passar o tamanho da lista e depois os dados da lista para assim calcular a máxima soma, a estruta para a lista é a seguinte, onde cada posição guarda um int <strong>value</strong> e a lista não tem tamanho fixo que pode ser visto em <strong>Item *vet</strong>, e para setar o tamanho da lista o método de fazer a lista vazia é utilizado, imagem a direita da estrutura
</p>
<p align="center">
<img src="estrutura.png">
<img src="tamanho.png">
</p>

<p align="justify">
O método para achar a máxima soma, a imagem a seguir, segue a seguinte lógica:
<ol>
  <li>Primeiro cria-se duas variáveis, uma auxilar <strong>soma</strong> que guarda a soma de uma sequência e uma <strong>max</strong> que guarda a maior soma e já começa com valor da primeira posição da lista</li>
  <li>Depois com cada posição da lista é feita soma de todas as sequências possíveis desta com está posição e o valor da soma é salvo em soma</li>
  <li>Se em algum momento o valor em soma for maior que o de max, max recebe o valor de soma</li>
  <li>No final retorna-se o valor de max, que é a máxima soma da lista</li>
</ol>
</p>
<p align="center">
<img src="maxsoma.png">
</p>

# Compilação e Execução

O progama disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
