# bccpolya
- Desenvolver uma função em C que calcule uma aproximação da raiz quadrada de um número real.

-         RESULT = RESULT / 2 + N / (2 * RESULT)
  RESULT = valor onde irá conter o ultimo resultado da expressão;
   N = valor constante da raiz quadrada requerida, ou seja, será sempre o mesmo valor;
  - Está expressão deverá ser feita 100 vezes, pois a cada vez que a expressão for realizada o RESULT chega mais perto do resultado esperado e quando atingir o resultado, mesmo que continue a fazer a expressão, o resultado nao vai mudar pois ele chegou ao resultado esperado.

- Português Estruturado = Algoritmo Raiz Quadrada

                          var
                            n: real
                            result: real
                            x: inteiro
                           
                          início
                            leia (n)
                            escreva (raizq(n))
                              para x de 0 até 100 passo 1 faça
                                result = result / 2 + n / (2 * result)
                              fimpara
                            retornar (result)
                          fimalgoritmo        

- ![Fluxograma]()                        
                        
- George Polya foi um grande matemático que se dedicou a arte de resolver problemas, por isso o nome do nosso repositório tem o termo "polya", pois estamos resolvendo um problema.
