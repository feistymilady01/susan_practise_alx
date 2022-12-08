#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if idx < 0 and idx > range(len(my_list)):
        return my_list.copy()
    else:
        my_list[idx] = my_list.copy()
        return my_list

