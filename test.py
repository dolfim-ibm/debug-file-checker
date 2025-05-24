import file_checker

fname1 = "test.txt"
fname2_raw = "テスト.txt"
fname2 = fname2_raw.encode("utf8")

print(f"{file_checker.file_exists(fname1)=}")
print(f"{file_checker.file_exists(fname2)=}")

print(f"{file_checker.file_exists_fix(fname1)=}")
print(f"{file_checker.file_exists_fix(fname2)=}")
