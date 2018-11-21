1. Defina qual modelo de Raspberry Pi você utilizará no projeto desta disciplina com o Raspberry Pi. Justifique sua escolha.

	Será utilizado o modelo raspberry pi 0. O modelo foi escolhido pelo seu pequeno tamanho e baixo consumo de corrente, pois o projeto se trata de algo que será de uso constante e não totalmente dependente de tomadas.

2. Defina qual sistema operacional você utilizará no projeto desta disciplina com o Raspberry Pi. Justifique sua escolha.

	O OS utilizado é o raspbian, se trata de uma plataforma mais atrativa e com mais recursos em web por se basear em uma distro ubuntu.
	
3. Defina de qual forma você instalará o sistema operacional escolhido. Escreva o passo-a-passo da instalação e forneça os links necessários para isto.

	Download da distro escolhida: https://www.raspberrypi.org/downloads/raspbian/
	Apos o download será instalado em um sdcard de 16gb utilizando o software Win32DiskImager: http://www.raspberry-projects.com/pi/pi-operating-systems/win32diskimager
	Após a instalação, conectar o sd a rasp e deixar a instalação automatica, sendo necessário escolher com teclado ou mouse a distro durante a instalação.
	
4. Defina de qual forma você desenvolverá software para o Raspberry Pi no projeto desta disciplina. Escreva o passo-a-passo do desenvolvimento e forneça os links necessários para isto.

	Será utilizado apache, shellscript, php, javascript, C e SQL. O proprio terminal fornece o ambiente para o script e C, para php, SQL e apache será instalado o LAMP, combinação de softwares "https://bitnami.com/stack/lamp/installer" para javascript será necessario os seguintes comandos
								
								sudo apt-get update
								sudo apt-get install nodejs
								sudo apt-get install npm