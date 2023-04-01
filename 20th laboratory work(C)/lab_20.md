# **Отчет по лабораторной работе № 8 по курсу “Фундаментальная информатика”**

**Студент группы:** М8О-108Б-22 Калюжный Михаил Сергеевич, номер по списку 11

**Контакты e-mail:** <pifagerodot@gmail.com>

**Работа выполнена:** «20» марта 2023 г.

**Преподаватель:** асп. каф. 806 Сахарин Никита Александрович

**Входной контроль знаний с оценкой:** 

**Отчет сдан:** «1» апреля 2023 г., **итоговая оценка** 

**Подпись преподавателя:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

## 1. **Тема**

Ствндартные утилиты Unix для обработки файлов

## 2. **Цель работы**

Изучение и освоение стандартных утилит UNIX, измения их поведения с помощью ключей, а так же конвейера. Приобретение навыков, необходимых для выполнения курсовых и лабораторных работ в среде UNIX.

## 3. **Задание (вариант № 11)**

Команды 39, 20, 22

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

Для поиска информации о данных командах используем ключ --help с соответствующей командой, либо Google 

## 7. **Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]**

-tar
работа с архивами

-find
поиск файлов по имени и другим свойствам

-df
показывает список всех файловых систем по именам устройств, сообщает их размер, занятое и свободное пространство и точки монтирования

-wc
вывод числа переводов строк, слов и байт для каждого указанного файла

-dd
копирование и конвертация файлов

-grep
находит на вводе строки, отвечающие заданному регулярному выражению, и выводит их

-tail
вывод нескольких последних строк из файла

-tee
выводит на экран, или же перенаправляет выходной поток (stdout) команды и копирует его содержимое в файл или в переменную

-head
вывод первых n строк из файла

-touch
установка времени последнего изменения файла, также используется для создания пустых файлов

-du
оценка занимаемого файлового пространства

-file
определения типа файла

-gzip
утилита сжатия и восстановления файлов, использующая алгоритм Deflate

-bzip2
утилита сжатия и восстановления файлов, использующая алгоритм Барроуза-Уиллера

-tr
копирует стандартный входной поток в стандартный выходной, подставляя или удаляя некоторые символы

-cmp
сравнивает два файла и, если они различаются, сообщает о первом байте и строке, где было обнаружено различие

-comm
читает файл1 и файл2, которые должны быть предварительно лексически отсортированы, и генерирует вывод, состоящий из трёх колонок текста: строки, найденные только в файле файл1; строки, найденные только в файле файл2; и строки, общие для обоих файлов

-xargs
берет данные из стандартного ввода или из файла, разбивает их в соответствии с указанными параметрами, а затем передает другой программе в качестве аргумента

-diff
сравнение файлов, выводящая разницу между двумя файлами (т.н. patch-файл)

-patch
перенос правок (изменений) между разными версиями текстовых файлов, информация о правке обычно содержится в отдельном patch-файле

-uniq
вывести или отфильтровать повторяющиеся строки в отсортированном файле

-sort
вывод сортированного слияния указанных файлов на стандартный вывод

-cut
выборка отдельных полей из строк файла (табуляция - разделитель по умолчанию)

Пункты 1-7 отчета составляются строго до начала лабораторной работы. Допущен к выполнению работы.

**Подпись преподавателя** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

## 8. **Распечатка протокола**
```
mimik@mimik-VirtualBox:~$ mktemp

/tmp/tmp.JQKja1UPvI

mimik@mimik-VirtualBox:~$ rm /tmp/tmp.JQKja1UPvI

mimik@mimik-VirtualBox:~$ mktemp --suffix=agu

/tmp/tmp.IZOw6Vav41agu

mimik@mimik-VirtualBox:~$ rm /tmp/tmp.IZOw6Vav41agu

mimik@mimik-VirtualBox:~$ mktemp -d aguX.tmp

mktemp: too few X's in template ‘aguX.tmp’

mimik@mimik-VirtualBox:~$ mktemp -d aguXXXXX.tmp

aguDahMB.tmp

mimik@mimik-VirtualBox:~$ rmdir ^C

mimik@mimik-VirtualBox:~$ rmdir aguDahMB.tmp

mimik@mimik-VirtualBox:~$ mktemp -u suffix=Flag

mktemp: too few X's in template ‘suffix=Flag’

mimik@mimik-VirtualBox:~$ mktemp -u --suffix=Flag

/tmp/tmp.aMzTZIzATnFlag

mimik@mimik-VirtualBox:~$ gzip -k test.txt

mimik@mimik-VirtualBox:~$ ls

11.c     15.txt           Documents    kp44.c       lab14b.c     lab9def.c

11.txt   abobaJZ70u2.tmp  Downloads    kp4.c        lab14c.c     Music

13a.txt  abobaKLFNVx.tmp  kp31.c       kp4def1.c    lab14defa.c  Pictures

13b.txt  abobanaT3FD.tmp  kp3.c        kp4def.c     lab14def.c   Public

13.txt   abobas0gOgT.tmp  kp3def1.c    lab12a.c     lab15a.c     snap

14a.txt  abobaWvExfP.tmp  kp3def1.txt  lab13.c      lab15.c      Templates

14b.txt  c4.out           kp3def2.txt  lab13defa.c  lab15def.c   test1.txt

14c.txt  cf1.c            kp3def3.txt  lab13defa.o  lab8.c       testishe.txt

14d.txt  cf2.c            kp3def4.txt  lab13defb.c  lab8defa.c   test.txt

14e.txt  cf3.c            kp3def.c     lab13defb.o  lab8defb.c   test.txt.gz

14f.txt  comm1.txt        kp41.c       lab13def.c   lab8def.c    Videos

15a.txt  comm.txt         kp42.c       lab13defd.c  lab8.o

15b.txt  Desktop          kp43.c       lab14a.c     lab9b.c

mimik@mimik-VirtualBox:~$ gzip -n test.txt.gz

gzip: test.txt.gz already has .gz suffix -- unchanged

mimik@mimik-VirtualBox:~$ gzip -l test.txt.gz

         compressed        uncompressed  ratio uncompressed_name

                100                  85  14.1% test.txt

mimik@mimik-VirtualBox:~$ gzip -t test.txt.gz

mimik@mimik-VirtualBox:~$ awk '{print $1}' testishe.txt

Gender



Male

Female

Male

Mi-24

Female

CR7

mimik@mimik-VirtualBox:~$ awk '{print $1}' testishe.txt | head -4

Gender



Male

Female

mimik@mimik-VirtualBox:~$ awk '/^M/' testishe.txt

Male                Paul        75kg

Male                Arnold      120kg

Mi-24 helicopter    Botik       46tonns

mimik@mimik-VirtualBox:~$ awk '! /^M/' testishe.txt

Gender              Name        Weight



Female              Sarah       150kg

Female              Barbara     35kg

CR7                 Ismail      Ideal

mimik@mimik-VirtualBox:~$ awk '/g$/' testishe.txt

Male                Paul        75kg

Female              Sarah       150kg

Male                Arnold      120kg

Female              Barbara     35kg

mimik@mimik-VirtualBox:~$ awk '{print NR, $0}' testishe.txt

1 Gender              Name        Weight

2 

3 Male                Paul        75kg

4 Female              Sarah       150kg

5 Male                Arnold      120kg

6 Mi-24 helicopter    Botik       46tonns

7 Female              Barbara     35kg

8 CR7                 Ismail      Ideal

mimik@mimik-VirtualBox:~$ awk '{print $NF}' testishe.txt

Weight



75kg

150kg

120kg

46tonns

35kg

Ideal

mimik@mimik-VirtualBox:~$ 


```
## 9. **Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.**

|№|Лаб. или дом.|Дата|Время|Событие|Действие по исправлению|Примечания|
| :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|1|Дом.|25.03.2023|19:00|Выполнение лабораторной работы|-|-|

## 10. **Замечания автора по существу работы**



## 11. **Выводы**

Были изучены основные команды для работы с файлами в OC Unix, получены базовые знания о скриптовом языке awk, что позволит более удобно работать с файлами в OC Unix.

Недочёты при выполнении задания могут быть устранены следующим образом: —

**Подпись студента:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

