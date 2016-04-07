# bccpolya
- Desenvolver uma função em C que calcule uma aproximação da raiz quadrada de um número real.

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
                        
- George Polya foi um grande matemático que se dedicou a arte de resolver problemas, por isso o nome do nosso repositório tem o termo "polya", pois estamos resolvendo um problema.
