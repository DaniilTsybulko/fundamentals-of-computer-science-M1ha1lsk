﻿`	`**Отчёт по лабораторной работе № 2** по курсу Фундаментальная информатика 

Студент группы М8О-108Б-22                                    № по списку 11.

ФИО: Калюжный Михаил Сергеевич

Контакты pifagerodot@gmail.com

Работа выполнена  « 29 » Сентября  2022 г.

Преподаватель: Сахарин Никита Александрович 

Входной контроль знаний с оценкой \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

Отчёт сдан «30» сентября 2022г., итоговая оценка \_\_\_\_\_\_\_\_

Подпись преподавателя \_\_\_\_\_\_\_\_\_\_\_\_\_

\1. **Тема**: Операционная среда OC UNIX

\2. **Цель работы**: Изучение и освоение программного обеспечения OC UNIX и приобретение навыков, необходимых для выполнения курсовых и лабораторных работ в среде UNIX 

\3. **Задание:** Изучить и освоить программное обеспечение OC UNIX и приобрести навыки, необходимые для выполнения курсовых и лабораторных работ в среде UNIX

\4. *Оборудование ПЭВМ студента, если пользовалось:*

- Процессор:  AMD Ryzen 3 3200U @2.600GHz
- ОП:  81 92Мб
- НМД: 237Гб

\5. **Программное обеспечение**(лабораторное):

- Операционная система семейства:  UNIX
- Наименование:  Ubuntu
- Версия:  Ubuntu 22.04 LTS
- Интерпретатор команд:  bash
- Версия:  5.1-6ubuntu1
- Редактор текстов:  none

\6. **Идея, метод, алгоритм** решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)

1. Запуск терминала в OC ubuntu
1. Ввод необходимых команд (описаны в сценарии)
1. Получение необходимого результата по выполнении данных команд
1. Запуск скрипта из файла с помощью терминала
1. Копирование кода для отчета
1. Завершение работы в терминале

\7. **Сценарий выполнения работы** [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию].
**
`	`См. алгоритм
**
`	`Используемые команды:

- who

вывод активного пользователя

- date

вывод даты и времени

- pwd

получить имя текущей директории

- ls

распечатать информацию о файлах или директориях

- cd

изменить текущую директорию

- cp

копировать файлы

- uptime

показывает текущее время и время работы

- mv

переместить (переименовать) файлы

- rm

удалить файлы

- cat

слить или вывести файлы-аргументы на стандартный вывод

- ps

узнать номера выполняемых процессов

- mkdir

создать директорию

- rmdir

удалить директорию

- nano

вызов текстового редактора

- man

выдать справку об использовании и ключах команды

- Скрипт для создания протокола:

1 #!/bin/bash

2 echo "It's me, $ whoami)" 3 echo "It's $(date) now"

4 echo "You can see some files in Documents: $(cd Documents) $(ls)"

\7) Оформить отчёт установленной формы

*Допущен к выполнению работы*. Подпись преподавателя \_\_\_\_\_\_\_\_\_\_\_\_

\8. **Распечатка протокола (**подклеить листинг окончательного варианта программы с тестовыми примерами, подписанный преподавателем).

ubuntu@ubuntu: $ who

ubuntu :0		2022-09-29 16:23 (:0)

ubuntu@ubuntu: $ date

Fri Sep 30 03:59:10 PM UTC 2022

ubuntu@ubuntu: $ pwd

/home/ubuntu

ubuntu@ubuntu: $ ls

Desktop	  Downloads     Pictures     scriptik.sh      Templates

Documents    Music         Public       snap             Videos

ubuntu@ubuntu: $ cd Documents

ubuntu@ubuntu:~/Documents $ uptime

16:01:16 up 37 min, 1 user, load average: 0.01, 0.08, 0.19

ubuntu@ubuntu:~/Documents$ cat > f1.txt

bla-bla-bonk

ubuntu@ubuntu:~/Documents$ cat > f2.txt

nothing

ubuntu@ubuntu:~/Documents$ cp f1.txt f2.txt

ubuntu@ubuntu:~/Documents$ cat f2.txt

bla-bla-bonk

ubuntu@ubuntu:~/Documents$ ls

f1.txt f2.txt

ubuntu@ubuntu:~/Documents$ mv f2.txt f21.txt

ubuntu@ubuntu:~/Documents $ ls

f1.txt f21.txt

ubuntu@ubuntu:-/Documents $ rm f21.txt ubuntu@ubuntu:~/Documents$ ls

f1.txt

ubuntu@ubuntu:~/Documents $ nano f1.txt

ubuntu@ubuntu:-/Documents$ cd - /home/ubuntu

ubuntu@ubuntu: $ mkdir New/

ubuntu@ubuntu: $ ls

Desktop Downloads New

Public

snap

Videos

Documents Music

Pictures

scriptik.sh

Templates

ubuntu@ubuntu: $ rmdir New

ubuntu@ubuntu: $ ls

Desktop

Downloads

Pictures

scriptik.sh

Templates

Documents Music

Public

snap

Videos

ubuntu@ubuntu: $ ls -l

total 4

drwxr-xr-x 2

ubuntu ubuntu 60 Sep 29 16:21 Desktop

drwxr-xr-x 2

ubuntu ubuntu 60 Sep 29 16:32 Documents

drwxr-xr-x 2 ubuntu ubuntu 40 Sep 29 16:23 Downloads

drwxr-xr-x 2 ubuntu ubuntu 40 Sep 29 16:23 Music ubuntu ubuntu 40 Sep 29 16:23 Pictures

drwxr-xr-x 2

drwxr-xr-x 2 ubuntu ubuntu 40 Sep 29 16:23 Public

-rw-rw-r-- 1 ubuntu ubuntu 125 Sep 29 16:27 scriptik.sh

drwx--- 3 ubuntu ubuntu 60 Sep 29 16:22 snap

drwxr-xr-x 2

ubuntu ubuntu 40 Sep 29 16:23 Templates

drwxr-xr-x 2 ubuntu ubuntu 40 Sep 29 16:23 Videos

ubuntu@ubuntu: $. scriptik.sh

It's me, ubuntu

It's Thu Sep 29 04:50:30 PM UTC 2022 now

You can see some files in Documents: Desktop

Documents

Downloads

Music

Pictures

Public

scriptik.sh

snap

Templates

Videos

ubuntu@ubuntu: $

**9. Дневник отладки** должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.

|№|Лаб. или Дом.|Дата|Время|Событие|Действие по исправлению|Примечание|
| :- | :- | :- | :- | :- | :- | :- |


||||||||
| :- | :- | :- | :- | :- | :- | :- |

**10.** **Замечания автора** по существу работы** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

**11. Выводы**

В процессе выполнения лабораторной работы мы ознакомились с основами OC UNIX  и     научились выполнять базовые действия с файлами и директориями, что в будущем  может помочь в выполнении других лабораторных работ.

Недочёты при выполнении задания могут быть устранены следующим образом: \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

Подпись студента \_\_\_\_\_\_\_\_\_\_\_\_\_
