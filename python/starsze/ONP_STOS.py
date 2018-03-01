#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    stos = []
    onp = input("Podaj wyrazenie ONP,oddzielajac operandy i operatory spacjami:\n")

    onp = onp.split(" ") #zamienia caig jak lista

    for wyraz in onp:
        if wyraz.isdigit():
            stos.append(wyraz)
        else:
            a = stos.pop()
            b = stos.pop()
            stos.append(eval(str(b) + wyraz + str(a)))


    print("Wynik:", stos.pop())

    return 0



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
