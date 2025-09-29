index.html: index.md
	pandoc -s index.md -o index.html --metadata title="INF-0103, H25"

clean:
	rm -f index.html
