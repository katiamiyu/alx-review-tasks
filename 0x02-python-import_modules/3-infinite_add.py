#!/usr/bin/python3
if __name__ == "__main__":
	from sys import argv
	total = 0;
	if len(argv) > 1:
		if len(argv) == 2:
			total = int(argv[1])
		else:
			for i, n in enumerate(argv):
				if i == 0:
					continue
				total += int(n)
	print(f"Total: {total}")
