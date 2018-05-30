/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** ...
*/

#ifndef MY_H
	#define MY_H
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <unistd.h>
	#include <criterion/criterion.h>
	#include <criterion/redirect.h>
	void redirect_all_std(void);
	char *add_right_length_to_str(char *str);
	char *add_0_at_start(char *str);
	char get_first_letter(char *str);
	char get_first_letter(char *str);;
	int find_minus_after_period(char *str);
	int find_nbr_after_period(char *str);
	int my_printf(char *str, ...);;
	int get_length(char *s);
	int get_less_in_str(char *str);
	int get_size(int nbr);
	int my_getnbr(char *src);
	int my_put_nbr(long nbr);
	int my_strlen(char *str);
	int my_strlen_binary(int nbr);
	int my_strlen_hexa(int nbr);
	int return_nbr_rec(char *src, int nbr, int signe, int start);
	void add_hex(int nbr, char *str);
	void add_hex_caps(int nbr, char *str);
	void disp_bin(char *str, va_list ap);
	void disp_char(char *str, va_list ap);
	void disp_h_caps(char *str, va_list ap);
	void disp_hexa(char *str, va_list ap);
	void disp_int(char *str, va_list ap);
	void disp_oct(char *str, va_list ap);
	void disp_p_flag(char *str, va_list ap);
	void disp_percent(char *str, va_list ap);
	void disp_pre_s_flag(int, int, int size_max, char *arg);
	void disp_pre_s_flag_case_less(int, int, int size_max, char *arg);
	void disp_pre_str(int, int, int size_max, char *arg);
	void disp_pre_str_case_less(int, int, int size_max, char *arg);
	void disp_right_thing(char *str,  va_list ap);
	void disp_s_flag(char *str, va_list ap);
	void disp_str(char *str, va_list ap);
	void disp_u_int(char *str, va_list ap);
	void my_put_0(int nbr);
	void my_put_binary(int nbr);
	void my_put_hexa(int nbr);
	void my_put_hexa_caps(int nbr);
	void my_put_octal(int nbr);
	void my_put_octal_s(int nbr);
	void my_put_s_octal(int nbr);
	void my_putchar(char c);
	void my_putstr(char *str, int nbr);
	void test_ok(void);
	void tests_broken(void);
	void disp_plus(char *str, int nbr);
	void disp_pre_hexa(int size_space, int size_zero, int, int arg);
	void disp_pre_caps_hex_case_less(int size_space, int, int, int arg);
	void disp_pre_caps_hexa(int size_space, int size_zero, int, int arg);
	void disp_pre_hex_case_less(int size_space, int, int, int arg);
	char *disp_str_if_minus(char *str);
	char *display_h_caps_and_add_to_str(char *str, int nbr);
	char *display_h_and_add_to_str(char *str, int nbr);
#endif