1. Especifique algumas portas importantes pré-definidas para o protocolo TCP/IP.

	21	FTP 22	SSH 23	Telnet(provavelmente o protocolo de acesso remoto mais antigo) 25	SMTP(protocolo padrão para o envio de e-mails.) 53	Domain Name (Nome do domínio do Sistema)(Converter domínios em IPs) 63	Whois 70	Gopher 79 Finger 80	HTTP(principal protocolo da Internet, usado para acesso às paginas web.) 110	POP3 119	NNTP

	As portas são codificadas em 16 bits com mais de 60 mil possibilidades e cada porta tem uma finalidade de tratamento de algum dado especifico.
	
2. Com relação a endereços IP, responda:

(a) Qual é a diferença entre endereços IP externos e locais?

	1.IP externo - O endereço de IP externo serve para identificar um dispositivo conectado à rede mundial de computadores, a Internet. Trata-se de um endereço único porém dinâmico: não existe mais de um computador com o mesmo endereço de IP conectado, mas o IP do seu modem pode ser alterado.
	2. O endereço de IP interno é utilizado na identificação de um computador, tablet ou celular ligado à uma rede interna, também conhecida como Intranet. O endereço de IP interno pode ser configurado como fixo ou gerenciado pelo roteador, que evita conflitos (mais de um dispositivo com o mesmo IP).

(b) Como endereços IP externos são definidos? Quem os define?

	É definido pelo provedor de internet contratado que tem um numero limite de endereços para serem atribuídos.

(c) Como endereços IP locais são definidos? Quem os define?

	Pode ser atribuído de forma dinâmica pelo roteador ou podem ser fixados pelos usuários da rede, porem é importante que tenha apenas um IP para cada dispositivo para evitar conflitos de comunicação. 
	
(d) O que é o DNS? Para que ele serve?

	É uma porta que tem finalidade de converter o dominio web para um ip de acesso. Por exemplo, www.google.com em um endereço do tipo 255.255.255.255. 

3. Com relação à pilha de protocolos TCP/IP, responda:
(a) O que são suas camadas? Para que servem?

	Cada camada é responsável por um grupo de tarefas, fornecendo um conjunto de serviços bem definidos para o protocolo da camada superior. 

(b) Quais são as camadas existentes? Para que servem?
	
	1. Fisica -  Tem como função principal a interface do modelo TCP/IP com os diversos tipos de redes (X.25, ATM, FDDI, Ethernet, Token Ring, Frame Relay, sistema de conexão ponto-a-ponto SLIP,etc.)
	2. Enlace - É usado para passar quadros da camada de rede de um dispositivo para a camada de rede de outro. Esse processo pode ser controlado tanto em software (device driver) para a placa de rede quanto em firmware ou chipsets especializados.
	3. Rede - A camada de rede resolve o problema de obter pacotes através de uma rede simples. Exemplos de protocolos são o X.25 e o Host/IMP da ARPANET.
	4. Transporte -	Resolvem problemas como confiabilidade (o dado alcançou seu destino?) e integridade (os dados chegaram na ordem correta?). Na suíte de protocolos TCP/IP os protocolos de transporte também determinam para qual aplicação um dado qualquer é destinado.
	5. Aplicação - camada que a maioria dos programas de rede usa de forma a se comunicar através de uma rede com outros programas. Processos que rodam nessa camada são específicos da aplicação; o dado é passado do programa de rede, no formato usado internamente por essa aplicação, e é codificado dentro do padrão de um protocolo.
	
(c) Quais camadas são utilizadas pela biblioteca de sockets?

	4. Camada de transporte.
	5. Camada de Aplicação. 
	Uma API que é padronizada para os diversos sistemas operacionais e que permite a comunicação de protocolos de transporte com diferentes convenções de endereçamento como TCP/IP e o IPX/SPX.

(d) As portas usadas por servidores na função bind() se referem a qual camada?

	bind() associa o socket com o seu endereço local, ou seja, é o Enlace com a rede, camadas de enlace e rede.

(e) Os endereços usados por clientes na função connect() se referem a qual camada?

	connect() é usado para conectar remotamente com o endereço do servidor, ou seja, conecta pela rede e transporta até o servidor. 

4. Qual é a diferença entre os métodos GET e POST no protocolo HTTP?

	GET Requisita uma representação do recurso especificado. Requisições usando GET devem apenas recuperar dados e não devem ter qualquer outro efeito. POST Envia dados para serem processados (por exemplo, dados de um formulário HTML) para o recurso especificado. Os dados são incluídos no corpo do comando. Sua utilização em uma requisição ocorre quando é necessário enviar dados ao servidor para serem processados, geralmente por um programa script identificado no Request-URI.