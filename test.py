import file_checker

print(f"{file_checker.file_exists('test.txt')=}")
print(f"{file_checker.file_exists('テスト.txt')=}")

print(f"{file_checker.file_exists_fix('test.txt')=}")
print(f"{file_checker.file_exists_fix('テスト.txt')=}")
