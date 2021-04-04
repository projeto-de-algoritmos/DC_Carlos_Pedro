## Ideia da questão
    
    - Adaptação de solução de forma não ordenada

## Solução

    - Array de struct para guardar o antigo índice.

```
    struct aux
    {
        long int value; - Casa N - Valor
        int i; - indice de entrada
    };
```
    - Ordenando de forma crescente, o vetor de acordo com o valor N (MergeSort).

    - Executando Busca para encontrar a próxima casa N (Binary Search).
