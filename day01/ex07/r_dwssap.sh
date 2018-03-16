cat /etc/passwd | grep -v '^#' | sed '1d; n; d' | rev| sort -r | tr "\n" ","
