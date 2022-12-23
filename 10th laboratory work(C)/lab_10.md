# **Отчет по лабораторной работе № 8 по курсу “Фундаментальная информатика”**

**Студент группы:** М8О-108Б-22 Калюжный Михаил Сергеевич, номер по списку 11

**Контакты e-mail:** <pifagerodot@gmail.com>

**Работа выполнена:** «20» декабря 2022 г.

**Преподаватель:** асп. каф. 806 Сахарин Никита Александрович

**Входной контроль знаний с оценкой:** 

**Отчет сдан:** «21» декабря 2022 г., **итоговая оценка** 

**Подпись преподавателя:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

1. **Тема**

Отладчик системы программированеия OC Unix.

2. **Цель работы**

Научиться отладке программ на языке Си.

3. **Задание (вариант № -)**

Отладит простейшую программу нга языке Си.

4. **Оборудование:**

Процессор: AMD Ryzen 3 3200U @2.600GHz with Radeon Vega Mobile Gfx 2.60 GHz

ОП: 8ГБ

SSD: 256 ГБ

Адрес: 159.65.63.147

Монитор: 15,6-дюймовый (1920 x 1080)

Графика: AMD Radeon(TM) Vega 3 Graphics

5. **Программное обеспечение:**

- Операционная система семейства:  UNIX
- Наименование:  Ubuntu
- Версия:  Ubuntu 22.04 LTS
- Интерпретатор команд:  bash
- Версия:  5.1-6ubuntu1
- Компилятор:  gcc
- ОТладчик: gdb

6. **Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)**

Отладить простейшую программу на Си с помощью отладчика gdb.

7. **Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]**

Код программы, используемый для отладки: 
```
#include <stdio.h>
#include <math.h>

int main() {
    double weight, watt;
    watt = 349.88;
    weight = 72.3;
    double p = pow(weight,0.6666667);
    double index = watt/p;
    printf("%lf", index);
    return 0;
}
```

Пункты 1-7 отчета составляются строго до начала лабораторной работы. Допущен к выполнению работы.

**Подпись преподавателя** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

8. **Распечатка протокола**
```
mimik@mimik-VirtualBox:~$ gcc -g lab8.c -lm
mimik@mimik-VirtualBox:~$ gdb a.ouе
GNU gdb (Ubuntu 12.1-0ubuntu1~22.04) 12.1
Copyright (C) 2022 Free Software Foundation, Inc.
License PLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...
(gdb) help
List of classes of commands:
aliases -- User-defined aliases of other commands.
breakpoints -- Making program stop at certain points.
data -- Examining data.
files -- Specifying and examining files.
internals -- Maintenance commands.
obscure -- Obscure features.
running -- Running the program.
stack -- Examining the stack.
status -- Status inquiries.
support -- Support facilities.
text-user-interface -- TUI is the GDB text based interface.
tracepoints -- Tracing of program execution without stopping the program.
user-defined -- User-defined commands.
Type help" followed by a class name for a list of commands in that class.
Type "help all" for the list of all commands.
Type "help" followed by command name for full documentation.
--Type <RET> for more, q to quit, c to continue withoutpaginType "apropos word" to search for commands related to "word".
Type "apropos -v word" for full documentation
 of commands related to "word".
Command name abbreviations are allowed if unambiguous.
(gdb) list
1	#include <stdio.h>
2	#include <math.h>
3	
4	int main() {
5	double weight, watt;
6	watt = 349.88;
7	weight = 72.3;
8	double p = pow(weight,0.6666667);
9	double index = watt/p;
10	printf("%lf", index);
(gdb) break 8
Breakpoint 1 at 0x118f: file lab8.c, line 8.
(gdb) start
Temporary breakpoint 2 at 0x1175: file lab8.c, line 6.
Starting program: /home/mimik/a.out 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Temporary breakpoint 2, main () at lab8.c:6
6	watt = 349.88;
(gdb) next
7	weight = 72.3;
(gdb) set var watt = 200
(gdb) next
Breakpoint 1, main () at lab8.c:8
8	double p = pow(weight,0.6666667);
(gdb) print watt
$1 = 200
(gdb) ptype weight
type = double
(gdb) continue
Continuing.
11.524031[Inferior 1 (process 3761) exited normally]
(gdb) quit
mimik@mimik-VirtualBox:~$ 


```

9. **Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.**

|№|Лаб. или дом.|Дата|Время|Событие|Действие по исправлению|Примечания|
| :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|1|Дом.|10.12.2022|19:00|Выполнение лабораторной работы|-|-|

10. **Замечания автора по существу работы**



11. **Выводы**

Была написана и отлажена простейшая программа на языке Си, приобретены полезные навыки и выполнены поставленные задачи.

Недочёты при выполнении задания могут быть устранены следующим образом: —

**Подпись студента:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

