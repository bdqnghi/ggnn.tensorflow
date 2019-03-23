import os
path = "github_cpp_program_data"
for root, dirs, files in os.walk(path, topdown=False):
	for file in files:
		file_path = os.path.join(root, file)

		with open(file_path, "r") as f:
			data = str(f.read())
			if "404" in data:
				print(file_path)
				os.remove(file_path)
  