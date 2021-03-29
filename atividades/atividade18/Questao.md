 # Atividade 18 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 31/03/2021
### Questão 01 

#### 1. C/C++
```
int k = (j + 13) / 27;
while(k > 10){
    k = k + 1;
    i = 3 * k + 1;
}
```

#### 2. Python
```
k = (j + 13) / 27
while k > 10:
    k = k + 1
    i = 3 * k + 1
```


### Questão 02

#### 1. C/C++
```
switch(k){
    case 1:
        j = 2 * k - 1;
        break;
    case 2:
        j = 2 * k - 1;
        break;
    case 3:
        j = 3 * k + 1;
        break;
    case 4:
        j = 4 * k - 1;
        break;
    case 5:
        j = 3 * k + 1;
        break;
    case 6:
        j = k - 2;
        break;
    case 7:
        j = k - 2;
        break;
    case 8:
        j = k - 2;
        break;
}
```

#### 2. Python

```
if (k == 1) or (k == 2):
    j = 2 * k - 1
elif (k == 3) or (k == 5):
    j = 3 * k + 1
elif k == 4:
    j = 4 * k - 1
elif (k == 6) or (k == 7) or (k == 8):
    j = k - 2
```

### Questão 03

```
int j = -3;

int break_func = 0;

for (int i = 0; (i < 3) || (break_func == 1); i++) {
    
    if (j + 2 == 3){
    	
    }
    
    else if (j + 2 == 2){
    	j--;
    	break_func = 1;
    }
    
    else if (j + 2 == 0){
    	j += 2;
    	break_func = 1;    	
    }
    
    else j = 0;
    
   
    if (j <= 0) j = 3 - i;
    
    else break_func = 1;

}
```