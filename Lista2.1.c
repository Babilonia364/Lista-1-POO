/*
Questão 1-
(a)Imprimirá 11 pois esta incrementando o conteúdo do endereço referenciado
por p1, no caso x.
(b)Imprimirá 20 pois y não sofre qualquer alteração
(c)Imprimirá o endereço de x que é 1000, como dito na questão
(d)Imprimirá 1004, o endereço de y, pois o operador & retorna o endereço da 
memória de uma variável, em outras palavras, ele referencia y
(e)Imprimirá 1000 pois p1 está referenciando x, logo, o conteúdo de p1 será
o endereço de memória da variável x.
(f)Imprimirá 1004, análogamente ao item anterior, mas para y.
(g)Imprimirá 31, o conteúdo de x e de y somados, pois o operador * acessa o
conteúdo do endereço de memória referenciado, assim somando o conteúdo das
referencias de p1 e p2, 11 + 20 = 31.
(h)Imprimirá 11, pois *(&x) imprimirá o conteúdo da referência de x, ou seja
o próprio valor de x.
(i)Imprimirá 1004, que é o endereço de y, que é 1004, pois &(*p2) irá imprimir
o endereço do conteúdo da referência de p2, ou seja, o endereço de y.
*/
/*
Questão 2-
Imprimirá 4 e 8, pois, inicialmente, na função main, estão sendo declarados 2
structs e 2 ponteiros de structs, após isso, temos que o ponteiros de struct c
passará a referenciar o struct a, então setamos os valores para as variáveis
dentro dos 2 structs a e b, logo em seguida o ponteiro d passa a referenciar
tudo que o ponteiro c passa a referenciar. Então o ponteiro d entra em uma função
que dobra o conteúdo das variaveis internas do struct que ele referencia, o struct a.
Como b recebe o conteúdo do ponteiro de struct d que referencia o struct a, então b
recebe o conteúdo de a, logo, b.x e b.y irá imprimir a.x e a.y, que foram dobrados
e tornaram - se 4 e 8.
*/