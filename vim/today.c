﻿//tweaks
cw            // аналогично ciw (если находимся в начале слова)
yw            // аналогично yaw (если находимся в начале слова)
ye            // аналогично yiw (если находимся в начале слова)
<C-R><C-O>-   // вставляет текст не затирая регистр "."

// regexp switchers
\c                //временно включить чувствительность к регистру

// regexp синтаксис
\_s               //пробел или конец строки
<>                //границы слов
%()               //не запоминать содержимое скобок
\v"\zs[.*]\ze"    //найти текст, заключенный в кавычки 
=escape(@u, getcmdtype().'\')    //экранировать все слеши в регистре u


//перемещение по файлам
[a,]a,[A,]A         // перемещение по arglist
[t,]t,[T,]T         // перемещение по tag-list
//..to be continued

qa;.q             //повторяем в макросе последние движения
qA j q            //добавить команды в конец макроса (если забыли)
//Как применить макрос ко всем открытым файлам:
:argdo norm @a    //Параллельный способ: быстро, но если будет ошибка, мы этого сразу не заметим
:qA :next q       //Последовательный способ: добавляем :next
                  //долго, но применяя макрос файл за файлом нам легче обнаружить ошибку

//пронумеровать строки файла
:let i=1          //создаем переменную
:let i+=1         //увеличиваем значение
