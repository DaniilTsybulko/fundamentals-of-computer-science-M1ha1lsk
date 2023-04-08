# **Отчет по лабораторной работе № 8 по курсу “Фундаментальная информатика”**

**Студент группы:** М8О-108Б-22 Калюжный Михаил Сергеевич, номер по списку 11

**Контакты e-mail:** <pifagerodot@gmail.com>

**Работа выполнена:** «5» апреля 2023 г.

**Преподаватель:** асп. каф. 806 Сахарин Никита Александрович

**Входной контроль знаний с оценкой:** 

**Отчет сдан:** «8» апреля 2023 г., **итоговая оценка** 

**Подпись преподавателя:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

## 1. **Тема**

Программирование на интерпретируемых командных языках

## 2. **Цель работы**

Изучение и освоение интерпретируемых языков программирования BASH и Python для написания скриптов для работы над файлами.

## 3. **Задание (вариант № 11)**

Конкатенация указанного файла заданное число раз так, чтобы длина результирующего файла в байтахне привысила заданного числа

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

1. Рассматриваем введенные аргументы. Если их меньше, чем необходимо, выводим сообщение об ошибке.
2. Рассматриваем введенные аргументы и проверяем, хватит ли нам места для конкатенации файла заданное число раз, если нет, выводим сообщение об ошибке.
3. Конкатенируем файл заданное число раз и сохраняем результат в новый файл.

## 7. **Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]**

Напишем скрипт на bash:
```
#!/bin/bash

# Проверим, что заданы все обязательные параметры
if [ "$#" -ne 4 ]; then
    echo "Ошибка, указано слищком мало параметров. Их значения будут приняты стандартными."
    read -p "dir name = " dir_name
    read -p "input file = " input_file
    read -p "repeats num = " num_repeats
    read -p "max size = " max_size
else
    dir_name=$1
    input_file=$2
    num_repeats=$3
    max_size=$4
fi

echo "Конкатенация файла $input_file $num_repeats раз до максимального размера $max_size байт..."

cd $dir_name

# Получим размер исходного файла
file_size=$(stat -c "%s" $input_file)

# Проверим, достаточно ли места, чтобы повторить файл указанное число раз
if [ $(expr $file_size \* $num_repeats) -gt $max_size ]; then
    echo "Ошибка: невозможно повторить $num_repeats раз файл $input_file до размера $max_size байт." >&2
    exit 1
fi

# Конкатенируем файл заданное число раз
while [ $num_repeats != 0 ]; do
    cat $input_file >> concatenated_file.txt
    num_repeats=$(expr $num_repeats - 1)
done
echo "Результирующий файл сохранен в concatenated_file.txt"
```

Пункты 1-7 отчета составляются строго до начала лабораторной работы. Допущен к выполнению работы.

**Подпись преподавателя** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

# 8. **Распечатка протокола**
```

mimik@mimik-VirtualBox:~$ chmod a+x skriptishe.sh
mimik@mimik-VirtualBox:~$ ./skriptishe.sh forTest test.txt 3 100
Конкатенация файла test.txt 3 раз до максимального размера 100 байт...
Результирующий файл сохранен в concatenated_file.txt
mimik@mimik-VirtualBox:~$ cd forTest
mimik@mimik-VirtualBox:~/forTest$ cat test.txt
abcdefg
mimik@mimik-VirtualBox:~/forTest$ cat concatenated_file.txt
abcdefg
abcdefg
abcdefg
mimik@mimik-VirtualBox:~/forTest$ 

```
## 9. **Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.**

|№|Лаб. или дом.|Дата|Время|Событие|Действие по исправлению|Примечания|
| :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|1|Дом.|05.04.2023|19:00|Выполнение лабораторной работы|-|-|

## 10. **Замечания автора по существу работы**

1. [Div3 задача A, на контесте](https://codeforces.com/contest/1811/submission/200739854)

## 11. **Выводы**

После изучения интерпретируемых языка программирования BASH были получены навыки написания скриптов для решения нетривиальных задач по обработке файлов в UNIX.

Недочёты при выполнении задания могут быть устранены следующим образом: —

**Подпись студента:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_