def print_board(board):
    print("\n")
    for i in range(3):
        print(" | ".join(board[i*3:(i+1)*3]))
        if i < 2:
            print("-" * 9)
    print("\n")

def check_winner(board):
    for i in range(0, 9, 3):
        if board[i] == board[i+1] == board[i+2] != ' ':
            return board[i]
    
 
    for i in range(3):
        if board[i] == board[i+3] == board[i+6] != ' ':
            return board[i]
    

    if board[0] == board[4] == board[8] != ' ':
        return board[0]
    if board[2] == board[4] == board[6] != ' ':
        return board[2]
    
    return None

def is_board_full(board):
    
    return ' ' not in board

def get_move(player, board):
   
    while True:
        try:
            move = int(input(f"Player {player}, enter your move (1-9): ")) - 1
            if 0 <= move <= 8 and board[move] == ' ':
                return move
            else:
                print("Invalid move. The space is either occupied or out of range.")
        except ValueError:
            print("Please enter a number between 1 and 9.")

def play_tic_tac_toe():
    
    
    board = [' ' for _ in range(9)]
    
    
    print("Welcome to Tic-Tac-Toe!")
    print("The board positions are numbered as follows:")
    print("1 | 2 | 3")
    print("---------")
    print("4 | 5 | 6")
    print("---------")
    print("7 | 8 | 9")
    print("\nLet's Battle to your friend now!\n")
    
   
    current_player = 'X'
    
    
    while True:
        
        print_board(board)
        
        
        move = get_move(current_player, board)
        
        
        board[move] = current_player
        
      
        winner = check_winner(board)
        if winner:
            print_board(board)
            print(f"Player {winner} wins!")
            break
        
        
        if is_board_full(board):
            print_board(board)
            print("It's a tie!")
            break
        
     
        current_player = 'O' if current_player == 'X' else 'X'

if __name__ == "__main__":
    play_tic_tac_toe()
    
   
    while True:
        play_again = input("Do you want to play again? (yes/no): ").lower()
        if play_again in ['yes', 'y']:
            play_tic_tac_toe()
        elif play_again in ['no', 'n']:
            print("Thanks for playing!")
            break
        else:
            print("Please enter 'yes' or 'no'.")