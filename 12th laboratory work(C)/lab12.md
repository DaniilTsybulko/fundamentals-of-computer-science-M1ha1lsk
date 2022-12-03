﻿# **Отчет по лабораторной работе № 8 по курсу “Фундаментальная информатика”**

**Студент группы:** М8О-108Б-22 Калюжный Михаил Сергеевич, номер по списку 11

**Контакты e-mail:** <pifagerodot@gmail.com>

**Работа выполнена:** «15» ноября 2022 г.

**Преподаватель:** асп. каф. 806 Сахарин Никита Александрович

**Входной контроль знаний с оценкой:** 

**Отчет сдан:** «19» ноября 2022 г., **итоговая оценка** 

**Подпись преподавателя:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

1. **Тема**

Техника работы с целыми числами. Системы счисления.

2. **Цель работы**

Составить программу на языке Си в целом типе данных, которая для любых чисел будет выполнять поставленную задачу.

3. **Задание (вариант № 11)**

ВЫполнить циклический сдвиг десятичного числа влево(вправо). 

4. **Оборудование:**

Процессор: AMD Ryzen 3 3200U @2.600GHz with Radeon Vega Mobile Gfx 2.60 GHz

ОП: 8ГБ

SSD: 256 ГБ

Адрес: 159.65.63.147

Монитор: 15,6-дюймовый (1920 x 1080)

Графика: AMD Radeon(TM) Vega 3 Graphics

5. **Программное обеспечение:**

Gcc

6. **Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)**

Составить программу, считывающую символы и распечатывающую нужные значения.

7. **Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]**
- Считать символы
- Выполнить циклический сдвиг
- Распечатать

Пункты 1-7 отчета составляются строго до начала лабораторной работы. Допущен к выполнению работы.

**Подпись преподавателя** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

8. **Распечатка протокола**

#include <stdio.h>

#include <stdlib.h>



typedef struct 

{

	char* buffer;

	size_t capacity;

 	size_t length;

} string;



int main ()

{

	int k, r, b;

	char t;

	printf("R or L?\n");

	scanf("%c\n", &t);

	r = 0;

	if (t == 'L')

	{

		int c = getchar();

		while (c-'0' != -38)

		{

			if (r == 0)

			{

				k = c-'0';

				r = 1;

			}

			int c = getchar();

			if (c-'0' != -38)

			{

				printf("%d", c-'0');

			}

			else

			{

				break;

			}

		}

		printf("%d\n", k);

		return 0;

	}

	if (t == 'R')

	{

		size_t capacity = 1 << 4;

  		size_t length = 0;

		char* str = malloc(capacity);

  		if (str == NULL) 

  		{

  	  		return 1;

  		}

  		while(1) 

  		{

    			char c = getchar();

    			if (c-'0' == -38)

    			{

    				b = k;

    				break;

    			}

    			length++;

    			if(length > capacity) 

    			{

      				capacity <<= 1;

      				char* new_str = realloc(str, capacity);

      				if (new_str == NULL) 

      				{ 

      					free(str);

        				return 1;

      				}

      				str = new_str;

    			}

    			str[length - 1] = c;

    			k = c-'0';

 		}

 		printf("%d", b);

  		for (int i =  0; i < length - 1; i++)

  		{

    			printf("%d", str[i]-'0');

    		}

    		free(str);

    		return 0;

  	}

}

			

9. **Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.**

|№|Лаб. или дом.|Дата|Время|Событие|Действие по исправлению|Примечания|
| :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|1|Дом.|15.11.2022|5:00|Выполнение лабораторной работы|-|-|

10. **Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX**

Данное задание удобно выполнять через getchar()

11. **Выводы**

Было выполнено поставленное задание, изучены основы работы с циклами, посимвольным считыванием, целыми числами, системами счисления и пользовательскими функциями.

Недочёты при выполнении задания могут быть устранены следующим образом: —

**Подпись студента:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
