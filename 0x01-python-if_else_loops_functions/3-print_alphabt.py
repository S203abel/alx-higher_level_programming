#!/usr/bin/python3
for i in range(97, 123):
    i = chr(i)
    if(i == 101)or(i == 113):
        continue
    print(i.format(), end="")
