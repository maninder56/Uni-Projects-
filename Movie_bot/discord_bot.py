#to use discord as user interface
from discord.ext import commands
# Client = discord.Client()
bot_prefix = "."
client = commands.Bot(command_prefix=bot_prefix)


@client.event
async def on_ready():
    print("bot is ready")


@client.command()
async def message(ctx):
    await ctx.send("Hello")


client.run("NzgxMjcxNjkzMTM3NTQzMjI4.X77N9g."
           "0-3sQtQ6gukcq-S35Qs_ix_ASZo")
