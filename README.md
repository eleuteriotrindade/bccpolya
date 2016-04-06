# bccpolya

1- Desenvolver uma função em C que calcule uma aproximação da raiz quadrada de um número real
-
- PORTUGUÊS ESTRUTURADO = Algoritmo Raiz Quadrada
- 
                          real: raiq(real)

                          inicio
                          
                            real: n
                            leia (n)
                            escreva (n)
                          
                          real raizq(real: n)
                          
                            inteiro: x
                            real: result = n
                              para x de 0 ate 10 passo 1 faca
                                result <- result / 2 + n/ (2 * result)
                              fimpara
                            retorne (result)  
                            
                          fimalgoritmo  
                          
-
