printf "\033c\033[43;30m\n"
micro-httpd 8000 &
sleep 8
ngrok http http://0.0.0.0:8000 &