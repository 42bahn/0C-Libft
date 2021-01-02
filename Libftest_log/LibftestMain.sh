bash ~/Libftest/grademe.sh > ~/libft/Libftest_log/grademe
cp ~/Libftest/deepthought ~/libft/Libftest_log/
#cat /dev/null > ~/libft/LibftestMain
cat ~/Libftest/tests/Part1_functions/ft_*/main.c > ~/libft/Libftest_log/Libftest_main
cat ~/Libftest/tests/Part2_functions/ft_*/main.c >> ~/libft/Libftest_log/Libftest_main
cat ~/Libftest/tests/Bonus_functions/ft_*/main.c >> ~/libft/Libftest_log/Libftest_main
