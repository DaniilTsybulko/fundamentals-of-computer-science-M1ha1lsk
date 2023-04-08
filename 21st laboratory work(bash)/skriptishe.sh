#!/bin/bash

# Проверим, что заданы все обязательные параметры
if [ "$#" -ne 4 ]; then
    echo "Ошибка, нужно указать 4 параметра следующим оюразом: ./skript_name.sh dir_name input_file num_repeats max_size"
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