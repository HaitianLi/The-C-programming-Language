BRANCHNAME=Yourname_branch1
REMOTE=Your_remote_name
COMMIT="your message"

branch:
	git checkout -b $(BRANCHNAME)
	git push origin $(BRANCHNAME)
	git remote add $(REMOTE) $(BRANCHNAME)
push:
	git add .
	git commit -m $(COMMIT)
	git push

