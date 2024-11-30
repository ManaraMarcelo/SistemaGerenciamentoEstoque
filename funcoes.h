//
// Created by Manara on 31/10/2024.
//

#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX_USUARIOS 100
#define TAM_CPF 12  // 11 dígitos + 1 para '\0'
#define TAM_SENHA 9 // 8 dígitos + 1 para '\0'
#define MAX_PRODUTOS 100  // Define o número máximo de produtos no estoque
#define TAMANHO_NOME 50   // Define o tamanho máximo do nome do produto

// Estrutura para armazenar informações sobre o produto
typedef struct {
    int id;                  // ID do produto
    char nome[TAMANHO_NOME]; // Nome do produto
    float preco;             // Preço do produto
    int quantidade;          // Quantidade em estoque
} Produto;

// Estrutura para armazenar informações do usuário
typedef struct {
    char cpf[TAM_CPF];
    char senha[TAM_SENHA];
} Usuario;

/**
 * Função para cadastrar usuários
 *
 * @param usuarios
 * @param numUsuarios
 */
void cadastrarUsuario(Usuario* usuarios, int* numUsuarios);

/**
 * Função para validar CPF e senha
 *
 * @param cpf
 * @param senha
 * @return 1 se os dados forem válidos, 0 caso contrário
 */
int validarDados(const char* cpf, const char* senha);

/**
 * Função para carregar usuários do arquivo
 *
 * @param usuarios
 * @return Número de usuários carregados
 */
int carregarUsuarios(Usuario* usuarios);

/**
 * Função para salvar usuários no arquivo
 *
 * @param usuarios
 * @param numUsuarios
 */
void salvarUsuarios(Usuario* usuarios, int numUsuarios);

/**
 * Função para realizar o login de um usuário
 *
 * @param usuarios
 * @param numUsuarios
 * @return 1 se o login for bem-sucedido, 0 caso contrário
 */
int login(Usuario* usuarios, int numUsuarios);

/**
 * Função para ler um número inteiro fornecido pelo usuário, garantindo entrada válida
 *
 * @return O número inteiro fornecido pelo usuário
 */
int ler_inteiro();

/**
 * Função para ler um número decimal (float) fornecido pelo usuário, garantindo entrada válida
 *
 * @return O número decimal fornecido pelo usuário
 */
float ler_float();

/**
 * Função para adicionar um novo produto ao estoque
 *
 * @param produtos
 * @param total_produtos
 */
void adicionar_produto(Produto *produtos, int *total_produtos);

/**
 * Função para listar os produtos no estoque
 *
 * @param produtos
 * @param total_produtos
 */
void listar_produtos(Produto *produtos, int total_produtos);

/**
 * Função para editar um produto no estoque
 *
 * @param produtos
 * @param total_produtos
 */
void editar_produto(Produto *produtos, int total_produtos);

/**
 * Função para salvar o estoque de produtos no arquivo
 *
 * @param produtos
 * @param total_produtos
 */
void salvar_estoque(Produto *produtos, int total_produtos);

/**
 * Função para carregar o estoque de produtos do arquivo
 *
 * @param produtos
 * @param total_produtos
 */
void carregar_estoque(Produto *produtos, int *total_produtos);

#endif //FUNCOES_H
