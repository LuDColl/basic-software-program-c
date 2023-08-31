# Atividade

Se declararmos um vetor como `int vet[30]`, a instrução abaixo acessa corretamente os elementos deste vetor?
```c
for (j=0; j <= 30; j++)
    vet[j] = j*j;
```

R: Este código dará erro pois vetores começam em **0** e terminam em **comprimento - 1**, e neste código está `j <= 30`, mas deveria ser `j < 30`.