# Conversor de Temperatura (Fahrenheit → Celsius) em C

## Descrição do Projeto

Este projeto em linguagem C tem como objetivo converter temperaturas de Fahrenheit (°F) para Celsius (°C), com base em valores fornecidos pelo usuário.

O programa funciona de forma contínua, permitindo múltiplas conversões sem a necessidade de reiniciar a execução. A conversão é realizada utilizando uma função específica, promovendo organização, reutilização de código e boas práticas de programação.

---

## Funcionamento

O programa é dividido em duas partes principais:

### Função `converterParaCelsius`

```c
float converterParaCelsius(float F);
```

* Recebe a temperatura em Fahrenheit
* Aplica a fórmula de conversão:
  C = (5/9) * (F - 32)
* Retorna o valor convertido em Celsius

### Função `main`

* Executa um loop infinito (`while(1)`)
* Solicita ao usuário a temperatura em Fahrenheit
* Chama a função `converterParaCelsius`
* Exibe o resultado formatado com duas casas decimais

---

## Exemplos de Execução

### Entrada:

Digite a temperatura em F:
68

### Saída:

Temperatura em C: 20.00

---

### Entrada:

Digite a temperatura em F:
32

### Saída:

Temperatura em C: 0.00

---

### Entrada:

Digite a temperatura em F:
100

### Saída:

Temperatura em C: 37.78

---

## Observações Importantes

* O programa utiliza um loop infinito (`while(1)`), permitindo múltiplas conversões até ser interrompido manualmente (Ctrl + C).
* É importante utilizar `5.0/9.0` em vez de `5/9`, pois em C a divisão entre inteiros resultaria em 0, comprometendo o cálculo.
* A utilização de função separada melhora a organização e facilita a reutilização do código.
* O resultado é exibido com duas casas decimais (`%.2f`).
* O programa não realiza validação de entrada (por exemplo, valores inválidos).
* Este projeto é útil para praticar:

  * Funções em C
  * Tipos `float`
  * Estruturas de repetição
  * Entrada e saída de dados
  * Aplicação de fórmulas matemáticas

