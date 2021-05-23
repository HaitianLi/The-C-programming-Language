BRANCHNAME=Yourname_branch7
REMOTE=Your_remote_name5
COMMIT="your message"

##

branch:
	#echo "Makefile" | cat > .gitignore
	echo "*.bb" | cat >> .gitignore
	git checkout -b $(BRANCHNAME)
	git push -u origin $(BRANCHNAME)
	# git remote add $(REMOTE) $(BRANCHNAME)
	# git push --set-upstream origin $(BRANCHNAME)
	####

push:
	git fetch origin
	git add .
	git commit -m $(COMMIT)
	git push

####make some new change, after change the rule,again make change hsould not change anymore