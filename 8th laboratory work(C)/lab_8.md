# **Отчет по лабораторной работе № 8 по курсу “Фундаментальная информатика”**

**Студент группы:** М8О-108Б-22 Калюжный Михаил Сергеевич, номер по списку 11

**Контакты e-mail:** <pifagerodot@gmail.com>

**Работа выполнена:** «10» ноября 2022 г.

**Преподаватель:** асп. каф. 806 Сахарин Никита Александрович

**Входной контроль знаний с оценкой:** 

**Отчет сдан:** «12» ноября 2022 г., **итоговая оценка** 

**Подпись преподавателя:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

## 1. **Тема**

Системы программирования на языке C

## 2. **Цель работы**

Изучить конкретную систему программирования на Си и получить навыки подготовки текстов и отладки программ

## 3. **Задание (вариант № —)**

Рассчитать коэффициент при гребле на тренажере Concept 2 (на дистанции 2000м)

## 4. **Оборудование:**

Процессор: AMD Ryzen 3 3200U @2.600GHz with Radeon Vega Mobile Gfx 2.60 GHz

ОП: 8ГБ

SSD: 256 ГБ

Адрес: 159.65.63.147

Монитор: 15,6-дюймовый (1920 x 1080)

Графика: AMD Radeon(TM) Vega 3 Graphics

## 5. **Программное обеспечение:**

- Операционная система семейства:  UNIX
- Наименование:  Ubuntu
- Версия:  Ubuntu 22.04 LTS
- Интерпретатор команд:  bash
- Версия:  5.1-6ubuntu1
- Компилятор:  gcc

## 6. **Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)**

Составить программу, рассчитывающую данный коэффициент по формуле k = p/(w^(2/3)) ,где k - коэффициент, w – вес человека, p – мощность в ваттах.

## 7. **Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]**
- Установить и настроить gcc
- Установить и настроить gcc
- Скомпилировать программу
- Запустить программу

``` :src/lab8.c
#include <stdio.h>
#include <math.h>

int main() {
    double weight, watt;
    printf("Enter your actual weight\n"); printf("Enter your actual count of watts \n");
    scanf("%lf", &weight);
    scanf("%lf", &watt); double p = pow(weight,0.6666667);
    double index = watt/p;
    printf("%lf", index);
    return 0;
}
``` 

Пункты 1-7 отчета составляются строго до начала лабораторной работы. Допущен к выполнению работы.

**Подпись преподавателя** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

## 8. **Распечатка протокола**
```
mimik@mimik-VirtualBox:~$ gcc lab8.c -lm

mimik@mimik-VirtualBox:~$ ./a.out

20.160139
```
## 9. **Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.**

|№|Лаб. или дом.|Дата|Время|Событие|Действие по исправлению|Примечания|
| :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|1|Дом.|10.11.2022|5:00|Выполнение лабораторной работы|-|-|

## 10. **Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX**

Для C-подобных языков наиболее популярны два компилятора — gcc и g++ для C и C++ соответственно.

## 11. **Выводы**

Были изучены основы работы с компилятором gcc: установка, компиляция, выполнение программ. Было выяснено, что Emacs — наиболее подходящий текстовый редактор для работы со сторонними компиляторами: установка и обозначение проходят быстро, а интегрированная командная строка значительно упрощает работу с программой.

Недочёты при выполнении задания могут быть устранены следующим образом: —

**Подпись студента:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

