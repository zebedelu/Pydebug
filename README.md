# Pydebug

## Descrição
O Pydebug é uma forma para execução de scripts Python que interrompe automaticamente o processo quando ocorre um erro, permitindo que a mensagem seja visualizada diretamente no terminal sem que a janela seja fechada imediatamente.

Diferente de ambientes integrados de desenvolvimento (IDEs), o Pydebug foca em simplicidade e desempenho, executando o código diretamente no terminal nativo do Windows. Isso proporciona uma experiência mais rápida e direta, especialmente em máquinas com recursos limitados.

## Motivação

Em computadores de menor desempenho, o uso de IDEs como o Visual Studio Code pode apresentar lentidão significativa, especialmente ao executar programas no terminal integrado. Esse atraso impacta diretamente a produtividade, dificultando a identificação rápida de erros.

O Pydebug foi criado com o objetivo de resolver esse problema. Ao evitar o uso do terminal embutido em editores pesados e utilizar o terminal padrão do sistema operacional, a execução dos scripts se torna mais rápida, responsiva e confiável.

## Funcionalidades
- Execução de scripts Python diretamente no terminal do Windows
- Pausa automática ao encontrar erros durante a execução
- Exibição clara e imediata da mensagem de erro
- Menor consumo de recursos do sistema em comparação com terminal de IDEs

## Vantagens
- Desempenho superior em máquinas modestas: elimina a sobrecarga de IDEs pesadas
- Feedback imediato: permite visualizar erros sem que o terminal feche automaticamente
- Simplicidade de uso: não requer configurações complexas
- Ambiente mais estável: utiliza o terminal nativo do Windows
- Foco em produtividade: ideal para ciclos rápidos de teste e correção

## Requisitos
- Sistema operacional: Windows
- Python instalado (qualquer versão)
- Terminal padrão do Windows (Prompt de Comando ou PowerShell)

## Como usar
Certifique-se de que o Python está instalado e configurado no PATH do sistema.

#### Passo 1
Clone o projeto
```bash
git clone https://github.com/zebedelu/Pydebug.git
```

#### Passo 2
Abra o CMD no modo ADMINISTRADOR e vá para a raiz do projeto

#### Passo 3
Execute os seguintes comandos para mudar o executavel do python para o **python compilator.exe**, e abrir o projeto no explorador de arquivos
```bash
assoc .py=Python.File
ftype Python.File="%cd%\python compilator.exe" "%1" %*
start explorer.exe %cd%
exit
```

#### Passo 4
Teste executando o arquivo error.py no projeto diretamente pelo explorador de arquivos, dando um duplo-clique

#### Passo 5
Verifique se a mensagem de erro é pausada assim que aparece

### Pronto!

## Observações
Esta versão do Pydebug é compatível apenas com Windows.
O comportamento de pausa depende do ambiente de execução do terminal.
A ferramenta é ideal para desenvolvimento local e aprendizado, mas não substitui ferramentas completas de depuração em projetos mais complexos.
