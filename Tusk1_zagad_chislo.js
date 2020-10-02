"use strict";
let  low, middle, high, search, regim, znak, i;

i = 0;
low = 1;
middle = 0;
high = 1000;

regim = Number(prompt("Режим:", "1 или 2"));

switch (regim)
{
    case 2:
        search = Nubmer(prompt("Введите число"));

        while (search != middle)
        {
            middle = Number(Math.floor((high + low )/ 2));

            znak = prompt (`${middle}?`);
            
            if (znak == ">")
                low = middle + 1;
            else
                high = middle - 1;
        i++;
    
        }
        alert (`Число найдено за ${i} проходов по алгоритму`);
        break;
    case 1:
        search = Number(Math.floor(Math.random() * (1001 - 1) + 1));

        while (middle != search)
        {
            middle = Number(prompt("Угадывай!"));

            if (middle > search)
                alert("Загаданное число меньше");
            else if (middle < search)
                alert("Загаданное число больше");
            else if (middle = search)
                alert("Ты угадал!")
            i++;
        }
    alert (`Число найдено за ${i} проходов по алгоритму`);
    break;
}
